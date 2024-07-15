static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
<START>
        fwrite((char *)"string", sizeof(char), strlen("string"), stdout);
<END>
    }
}
