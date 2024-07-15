namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
    data = NULL;
    data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
    free(data);
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
    data = new TwoIntsClass;
    goto sink;
sink:
    delete data;
}
} 
