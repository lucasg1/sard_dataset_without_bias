typedef struct _charVoid
{
    wchar_t charFirst[16];
    void * voidSecond;
    void * voidThird;
} charVoid;
static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            charVoid structCharVoid;
            structCharVoid.voidSecond = (void *)SRC_STR;
            printWLine((wchar_t *)structCharVoid.voidSecond);
<START>
            memmove(structCharVoid.charFirst, SRC_STR, sizeof(structCharVoid));
<END>
            structCharVoid.charFirst[(sizeof(structCharVoid.charFirst)/sizeof(wchar_t))-1] = L'\0'; 
            printWLine((wchar_t *)structCharVoid.charFirst);
            printWLine((wchar_t *)structCharVoid.voidSecond);
        }
    }
}
