namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
    {
        data = NULL;
        data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
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
    twoIntsStruct * data;
    data = NULL;
    while(1)
    {
        data = new twoIntsStruct;
        break;
    }
    while(1)
    {
        delete data;
        break;
    }
}
} 
