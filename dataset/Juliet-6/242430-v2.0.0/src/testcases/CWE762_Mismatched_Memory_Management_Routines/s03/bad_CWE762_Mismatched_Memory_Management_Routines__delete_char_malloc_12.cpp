namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    else
    {
        data = new char;
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
