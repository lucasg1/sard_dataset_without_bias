namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
    data = new TwoIntsClass[100];
    goto sink;
sink:
    delete [] data;
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
    free(data);
}
} 
