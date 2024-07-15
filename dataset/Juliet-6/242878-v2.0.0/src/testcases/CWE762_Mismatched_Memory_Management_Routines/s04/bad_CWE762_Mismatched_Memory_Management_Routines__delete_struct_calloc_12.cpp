namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    else
    {
        data = new twoIntsStruct;
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        delete data;
<END>
    }
    else
    {
        free(data);
    }
}
} 
