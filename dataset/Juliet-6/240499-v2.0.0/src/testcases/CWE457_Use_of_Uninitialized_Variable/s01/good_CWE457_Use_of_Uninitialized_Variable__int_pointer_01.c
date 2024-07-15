void FUN0()
{
    int * data;
    data = (int *)malloc(sizeof(int));
    if (data == NULL) {exit(-1);}
    *data = 5;
    printIntLine(*data);
}
void FUN1()
{
    int * data;
    ; 
    data = (int *)malloc(sizeof(int));
    if (data == NULL) {exit(-1);}
    *data = 5;
    printIntLine(*data);
}
