
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w) {

    //top-down
    int t[n+1][w+1];

    for(int i=0; i<n+1; i++) {
        for(int j=0; j<w+1; j++) {
            t[i][j]=0;
        }
    }

    for(int i=1; i<n+1; i++) {
        for(int j=1; j<w+1; j++) {
            if(weights[i-1] <= j) {
                t[i][j] = max(values[i-1]+t[i-1][j-weights[i-1]],
                t[i-1][j]);
            }
            else t[i][j] = t[i-1][j];
        }
    }
    return t[n][w];

/*
   Memoization

    int t[n+1][w+1];

    memset(t,-1,sizeof(t));

    if(w==0 || n==0) return 0;

    if(t[n][w]!=-1) return t[n][w];

    if(weights[n-1]<=w){
     return t[n][w]=max(values[n-1]+maxProfit(values,weights,n-1,w-weights[n-1]),
        maxProfit(values, weights, n-1, w));

    }
    else return t[n][w]=maxProfit(values, weights, n-1, w);
*/

}
