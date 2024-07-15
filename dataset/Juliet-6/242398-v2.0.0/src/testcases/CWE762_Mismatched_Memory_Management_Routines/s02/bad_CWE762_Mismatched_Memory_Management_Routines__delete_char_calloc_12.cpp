namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (char *)calloc(100, sizeof(char));
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
