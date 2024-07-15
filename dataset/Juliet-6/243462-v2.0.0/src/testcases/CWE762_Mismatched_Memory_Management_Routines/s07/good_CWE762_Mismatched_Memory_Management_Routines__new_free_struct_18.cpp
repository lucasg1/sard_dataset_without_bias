namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = new twoIntsStruct;
    goto sink;
sink:
    delete data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
    free(data);
}
} 
