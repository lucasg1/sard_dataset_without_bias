namespace NAMESPACE0
{
void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = new struct _twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    goto sink;
sink:
    delete[] data;
}
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    struct _twoIntsStruct VAR1[100];
    data = VAR1;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    goto sink;
sink:
    ; 
}
} 
