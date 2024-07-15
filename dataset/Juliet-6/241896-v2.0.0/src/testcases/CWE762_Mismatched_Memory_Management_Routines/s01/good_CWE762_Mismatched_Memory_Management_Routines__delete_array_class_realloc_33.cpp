namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * &dataRef = data;
    data = NULL;
    data = new TwoIntsClass[100];
    {
        TwoIntsClass * data = dataRef;
        delete [] data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    TwoIntsClass * &dataRef = data;
    data = NULL;
    data = NULL;
    data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    {
        TwoIntsClass * data = dataRef;
        free(data);
    }
}
} 
