void sortAscending(float array[], int size)
{
    for(int i=0;i<size;i++){
        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                swap (array[i],array[j]);
            }
        }
    }
}
void reverseArray(float array[], int size)
{
    float tmp;
    for (int i=0; i<size/2;i++){
        tmp=array[i];
        array[i]=array[size-1-i];
        array[size-1-i]=tmp;
    }
}
void sort(float array[], int size, bool isAscending)
{
    sortAscending( array, size);
    if (isAscending==0){
        reverseArray(array, size);
    }
    // for (int i=0;i<size;i++){
    //     cout<<fixed<<setprecision(2)<<array[i]<<' ';
    // }
}
