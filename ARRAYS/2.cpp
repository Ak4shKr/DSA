void merge(vector<int> &mat1, int m, vector<int> &mat2, int n)
{
    int i = 0, j = 0;
    vector<int> temp;
    while (i < m && j < n)
    {
        if (mat1[i] <= mat2[j])
        {
            temp.push_back(mat1[i]);
            i++;
        }
        else
        {
            temp.push_back(mat2[j]);
            j++;
        }
    }

    while (i < m)
    {
        temp.push_back(mat1[i]);
        i++;
    }

    while (j < n)
    {
        temp.push_back(mat2[j]);
        j++;
    }

    for (auto k = 0; k < (m + n); k++)
    {
        mat1[k] = temp[k];
    }
}

int binarySearch(vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid; // Found the target at index mid
        }
        else if (arr[mid] < target)
        {
            left = mid + 1; // Adjust the left boundary
        }
        else
        {
            right = mid - 1; // Adjust the right boundary
        }
    }

    return -1; // Target not found in the array
}

public:
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    vector<int> mat1 = matrix[0];
    int m = mat1.size();
    int n = matrix[0].size();
    marge(mat1, m, matrix[1], n);
    marge(mat1, m, matrix[2], n);
    marge(mat1, m, matrix[3], n);
    marge(mat1, m, matrix[4], n);

    binarySearch(mat1, target);

    if (result != -1)
    {
        return true;
    }
    else
        return false;
}
}
;
