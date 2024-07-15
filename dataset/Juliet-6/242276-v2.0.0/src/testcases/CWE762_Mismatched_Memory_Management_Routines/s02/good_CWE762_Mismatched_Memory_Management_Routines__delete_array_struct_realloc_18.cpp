namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
    free(data);
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = new twoIntsStruct[100];
    goto sink;
sink:
    delete [] data;
}
} 
