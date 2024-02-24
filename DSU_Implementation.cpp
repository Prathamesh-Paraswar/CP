#include<bits/stdc++.h>
using namespace std;

int findUpar(int node, vector<int>&parent)
{
    if(node==parent[node]) return node;
    return parent[node] = findUpar(parent[node], parent);
}

void unionByrank(int u, int v, vector<int>&par, vector<int>&rank)
{
    int ulp_u = findUpar(u, par);
    int ulp_v = findUpar(v, par);
    if(ulp_u==ulp_v) return;
    if(rank[ulp_u]<rank[ulp_v]) par[ulp_u] = ulp_v;
    else if(rank[ulp_u]>rank[ulp_v]) par[ulp_v] = ulp_u;
    else
    {
        par[ulp_v] = ulp_u;
        rank[ulp_u]++;
    }
}
bool connected(int u, int v, vector<int>&parent)
{
    return findUpar(u, parent)==findUpar(v, parent);
}
void reset(int u, vector<int>&parent, vector<int>&rank)
{
    parent[u] = u;
    rank[u] = 0;
}