namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = NULL;
        data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    else
    {
        data = new twoIntsStruct[100];
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        delete [] data;
<END>
    }
    else
    {
        free(data);
    }
}
} 
