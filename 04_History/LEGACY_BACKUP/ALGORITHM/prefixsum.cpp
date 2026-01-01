vector<int> prefixSum(n + 1);

    prefixSum[0] = C;

    for (int i = 0; i < n; i++)
        prefixSum[i + 1] = prefixSum[i] + a[i];
