for (int row = 0; row < rowLen; row++)
    {
        int start = 0;
        int end = 2;

        while (start < end)
        {
            swap(arr[row][start] ,arr[row][end]);

            start++;
            end--;
        }
    }