namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    while(1)
    {
        data = NULL;
        data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
        break;
    }
    while(1)
    {
        free(data);
        break;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    while(1)
    {
        data = new TwoIntsClass[100];
        break;
    }
    while(1)
    {
        delete [] data;
        break;
    }
}
} 
