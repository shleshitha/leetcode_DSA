class Solution {
    public int minTimeToReach(int[][] moveTime) {
        int n = moveTime.length;
        int m = moveTime[0].length;
        
        int[][] dist = new int[n][m];
        for (int i = 0; i < n; i++) {
            Arrays.fill(dist[i], Integer.MAX_VALUE);
        }
        
        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> a[0] - b[0]);
        
        pq.offer(new int[]{0, 0, 0});
        dist[0][0] = 0;
        
        int[][] dirs = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        
        while (!pq.isEmpty()) {
            int[] curr = pq.poll();
            int time = curr[0];
            int row = curr[1];
            int col = curr[2];

            if (time > dist[row][col]) continue;
            
            for (int[] dir : dirs) {
                int newRow = row + dir[0];
                int newCol = col + dir[1];
                
                if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m) {
                    int newTime = Math.max(time, moveTime[newRow][newCol]) + 1;
                    
                    if (newTime < dist[newRow][newCol]) {
                        dist[newRow][newCol] = newTime;
                        pq.offer(new int[]{newTime, newRow, newCol});
                    }
                }
            }
        }
        
        return dist[n-1][m-1];
    }
}