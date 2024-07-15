void FUN0()
{
    int * data;
    goto source;
source:
    ; 
    goto sink;
sink:
    data = (int *)malloc(sizeof(int));
    if (data == NULL) {exit(-1);}
    *data = 5;
    printIntLine(*data);
}
void FUN1()
{
    int * data;
    goto source;
source:
    data = (int *)malloc(sizeof(int));
    if (data == NULL) {exit(-1);}
    *data = 5;
    goto sink;
sink:
    printIntLine(*data);
}
