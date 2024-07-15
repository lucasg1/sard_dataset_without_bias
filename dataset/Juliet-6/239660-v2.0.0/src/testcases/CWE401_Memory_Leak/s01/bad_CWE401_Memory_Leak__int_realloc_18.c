void FUN0()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = (int *)realloc(data, 100*sizeof(int));
    if (data == NULL) {exit(-1);}
    data[0] = 5;
    printIntLine(data[0]);
    goto sink;
sink:
<START>
<END>
    ; 
}
