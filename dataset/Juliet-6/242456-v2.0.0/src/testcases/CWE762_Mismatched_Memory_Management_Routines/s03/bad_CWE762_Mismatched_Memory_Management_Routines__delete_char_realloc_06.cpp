static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = NULL;
        data = (char *)realloc(data, 100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        delete data;
<END>
    }
}
} 
