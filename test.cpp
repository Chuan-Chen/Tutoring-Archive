void merge(int *a, int start, int middle, int end);

//sort function is breaking up the array into halves
void sort(int *a, int start, int end){
    if(start < end){
        int middle = (start + end)/2;
        sort(a, start, middle); //90, 70, 20, 10
        sort(a, middle + 1, end); //40, 50, 20, 100
        merge(a, start, middle, end);
    }
}

/*
Loop 1
    [...] 0    7 
sort(a, start, size - 1)
     0   1   2   3   4   5   6   7
a = [90, 70, 20, 10, 40, 50, 20, 100] 
start = 0, middle = (start + end)/2 = 3, end = 7
            [...]   0      3
    line 62 sort(a, start, middle)
                [...]    0      3
            sort(int *a, start, end)
        Recursion 1
            a = [90, 70, 20, 10, 40, 50, 20, 100]
            start = 0, middle = (start+end)/2 = 1, end = 3
                      [...]   0      1
            line 62 sort(a, start, middle)
                        [...]    0      1
                    sort(int *a, start, end)
                        Recursion 1(1)
                            a = [90, 70, 20, 10, 40, 50, 20, 100]
                            start = 0, middle = (start+end)/2 = 0, end = 1
                                        [...] 0      0
                            line 62 sort(a, start, middle) //finished
                                Recursion 1(2) //finished 
                                    [...]   0 + 1 = 1    1
                            line 63 sort(a, middle + 1 , end)
                                Recursion 1(2) //finished
                                        [...] 0     0       1
                            line 64 merge(a, start, middle, end);
            line 63 sort(a, middle + 1, end); 

    line 63 sort(a, middle + 1, end)


*/