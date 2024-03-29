
void dfs(int** & arr,int i,int j,int n,int m) {

   if(i<0||j<0||i>=n||j>=m||arr[i][j]!=1) return;
   arr[i][j] = 0;
   int dx[] = { -1, 0, 1, 0 ,-1,1,-1,1};
   int dy[] = { 0, 1, 0, -1 ,1,-1,-1,1};

   for(int k=0; k<8; k++) {
      int nx = dx[k]+i;
      int ny = dy[k]+j;
      dfs(arr, nx, ny, n, m);
   }
}




int getTotalIslands(int** arr, int n, int m)
{
   int count = 0;
   for(int i=0; i<n; i++) {
      for(int j=0; j<m; j++) {
         if(arr[i][j] == 1) {
            dfs(arr, i, j, n, m);
            count++;
         }
      }
   }
   return count;
}
