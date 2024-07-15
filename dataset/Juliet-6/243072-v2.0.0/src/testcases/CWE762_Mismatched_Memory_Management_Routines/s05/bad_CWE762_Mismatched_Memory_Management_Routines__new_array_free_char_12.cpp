namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new char[100];
    }
    else
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        free(data);
<END>
    }
    else
    {
        delete [] data;
    }
}
} 
