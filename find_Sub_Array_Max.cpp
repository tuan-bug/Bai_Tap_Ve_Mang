void find_Sub_Array_Max(int a[],int n) {
    int best = 0, sum = 0;
    int star = 0, end = 0, begin = 0;
    for (int i = 0; i < n; i++) {
        if (sum + a[i] < a[i]) {
            begin = i;
            sum = a[i];
        } else {
            sum += a[i];
        }

        if (best < sum) {
            best = sum;
            star = begin;
            end = i;
        }
    }
    cout <<"Day con lon nhat: " << best;
    cout << "Day con lon nhat bat dau tu " << star <<"den" << end);
}