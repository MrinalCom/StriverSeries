int traffic(int n, int m, vector<int> vehicle) {
	// Write your code here.
	  int ans = 0, count = 0, j = 0;

    for (int i = 0; i < n; i++) {

      

      while (j < n && count <= m) {

        if (vehicle[j] == 0) {

            count++;

            if (count > m) {

                count--;

                break;

            }

        }

        j++;

      }

      ans = max(ans, j-i);

      if (vehicle[i] == 0) {

          count--;

      }

      

    }

return ans;
}
