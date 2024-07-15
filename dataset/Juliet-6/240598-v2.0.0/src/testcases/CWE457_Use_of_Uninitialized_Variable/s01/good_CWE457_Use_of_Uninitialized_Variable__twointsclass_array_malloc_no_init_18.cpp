namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(malloc(10*sizeof(TwoIntsClass)));
    if (data == NULL) {exit(-1);}
    goto source;
source:
    ; 
    goto sink;
sink:
    for(int i=0; i<10; i++)
    {
        data[i].intOne = i;
        data[i].intTwo = i;
    }
    for(int i=0; i<10; i++)
    {
        printIntLine(data[i].intOne);
        printIntLine(data[i].intTwo);
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(malloc(10*sizeof(TwoIntsClass)));
    if (data == NULL) {exit(-1);}
    goto source;
source:
    for(int i=0; i<10; i++)
    {
        data[i].intOne = i;
        data[i].intTwo = i;
    }
    goto sink;
sink:
    for(int i=0; i<10; i++)
    {
        printIntLine(data[i].intOne);
        printIntLine(data[i].intTwo);
    }
}
} 
