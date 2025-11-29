# Save as solve.py and run with input on stdin.
import sys
import math
import heapq

def dist(a,b):
    dx = a[0]-b[0]
    dy = a[1]-b[1]
    return math.ceil(math.hypot(dx,dy))

def main():
    data = sys.stdin.read().strip().split()
    it = iter(data)
    xs = int(next(it)); ys = int(next(it))
    xd = int(next(it)); yd = int(next(it))
    B = int(next(it))
    C0 = int(next(it))
    T = int(next(it))
    C = [0] + [int(next(it)) for _ in range(T)]  # 1..T
    N = int(next(it))

    # nodes: 0 = home, 1..N = stations 0..N-1, N+1 = dest
    nodes = []
    nodes.append((xs, ys))
    stations = []
    links_per_station = []
    for i in range(N):
        xi = int(next(it)); yi = int(next(it)); li = int(next(it))
        stations.append((xi, yi))
        links = []
        for _ in range(li):
            j = int(next(it)); mj = int(next(it))
            links.append((j, mj))
        links_per_station.append(links)
    nodes.extend(stations)
    nodes.append((xd, yd))
    dest_idx = N+1

    # build adjacency: list of (to, length, cost)
    adj = [[] for _ in range(N+2)]

    # add station-to-station bidirectional edges using listed modes
    for i in range(N):
        u = 1 + i
        for (j, mj) in links_per_station[i]:
            v = 1 + j
            d = dist(nodes[u], nodes[v])
            c = C[mj] * d
            adj[u].append((v, d, c))
            adj[v].append((u, d, c))

    # add car edges:
    # home -> destination by car
    d = dist(nodes[0], nodes[dest_idx])
    adj[0].append((dest_idx, d, C0 * d))
    # home -> each station (car)
    for i in range(N):
        v = 1 + i
        d = dist(nodes[0], nodes[v])
        adj[0].append((v, d, C0 * d))
    # each station -> destination (car)
    for i in range(N):
        u = 1 + i
        d = dist(nodes[u], nodes[dest_idx])
        adj[u].append((dest_idx, d, C0 * d))

    # Resource-constrained Dijkstra: dp[node][used_dist] = min cost
    INF = 10**30
    maxd = B
    dp = [ [INF]*(maxd+1) for _ in range(N+2) ]
    dp[0][0] = 0
    pq = [(0, 0, 0)]  # (cost, node, used_dist)

    while pq:
        cost_so_far, u, used = heapq.heappop(pq)
        if cost_so_far != dp[u][used]:
            continue
        # early stop not used because we need minimal cost over any used<=B
        for v, dlen, ecost in adj[u]:
            new_used = used + dlen
            if new_used > maxd:
                continue
            new_cost = cost_so_far + ecost
            if new_cost < dp[v][new_used]:
                dp[v][new_used] = new_cost
                heapq.heappush(pq, (new_cost, v, new_used))

    ans = min(dp[dest_idx])
    if ans >= INF:
        print(-1)
    else:
        print(ans)

if __name__ == "__main__":
    main()
