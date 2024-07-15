namespace NAMESPACE0 
{
class HelperClass 
{
    private:
        int intArray[2];
    public:
        HelperClass() 
        { 
            intArray[0] = 0x41; 
            intArray[1] = 0x42; 
        }
        const int *getIntArray() 
        { 
            return intArray; 
        }
};
static const int *FUN0()
{
    HelperClass HelperClass;
<START>
    return HelperClass.getIntArray(); 
<END>
}
void FUN1() 
{
    printIntLine(*FUN0());
}
};
