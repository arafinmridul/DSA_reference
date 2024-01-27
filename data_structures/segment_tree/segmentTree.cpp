#include<iostream>
using namespace std;

const int N = 1e5+2;

int a[N], tree[4*N];

/*In Segment Tree,
if n is the number of elements,
//Number of levels = 1+log2(n)
//Number of nodes = 1+2+4+....+(n/2)+(n/4)+n
and that is, (a * (r^n - 1)) / (r - 1)
==> (1 * [2^(1 + log2(n)) - 1]) / (2 - 1)
==> (2 * n) - 1
*/

void build(int node, int st, int en)
{
    if(st == en)
    {
        tree[node] = a[st]; //leaf node
        return;
    }

    //divide and conquer algorithm
    int mid = (st+en)/2;
    build(2*node, st, mid); //left child node
    build(2*node+1, mid+1, en); //right child node

    tree[node] = tree[2*node] + tree[2*node+1]; //parent node
    //this line may change according to the need
    //could be "max" instead of "+"

}

int main(){

    int n; cin >> n;

    for(int i=0; i<n; ++i){
        cin >> a[i];
    }

    //build segment tree
    build(1, 0, n-1);

    for(int i=1; i<=15; ++i){
        cout << tree[i] << ' ';
    }
    cout << endl;

}