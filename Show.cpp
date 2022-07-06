#include "Show.h"

using namespace std;

Show::Show() {
	Title = "No Tv Show or Movie";
}

Show::Show(string name) {
	Title = name;
}

void Show::Details() {
	cout << "Title: " << Title << endl;
}

/*void Show::Play(){
  cout << "Playing Show" << endl;
}
*/

