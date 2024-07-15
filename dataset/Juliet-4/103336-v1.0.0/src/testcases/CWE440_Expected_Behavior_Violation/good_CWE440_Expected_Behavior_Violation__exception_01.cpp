using namespace std;
namespace NAMESPACE0 
{
void FUN0() throw (range_error) 
{
	throw range_error("Test");
}
void FUN1() 
{
    FUN0();
}
} 
