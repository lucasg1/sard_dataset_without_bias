typedef struct _charVoid
{
    char charFirst[16];
    void * voidSecond;
    void * voidThird;
} charVoid;
void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            charVoid structCharVoid;
            structCharVoid.voidSecond = (void *)SRC_STR;
            printLine((char *)structCharVoid.voidSecond);
<START>
            memmove(structCharVoid.charFirst, SRC_STR, sizeof(structCharVoid));
<END>
            structCharVoid.charFirst[(sizeof(structCharVoid.charFirst)/sizeof(char))-1] = '\0'; 
            printLine((char *)structCharVoid.charFirst);
            printLine((char *)structCharVoid.voidSecond);
        }
    }
}
