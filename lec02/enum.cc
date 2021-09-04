#include "../common.h"

void enum_test() {
  enum MODE { WEAPON, EQUIPMENT, GEM,  DEFENSE};
  int mode;

  cout << "Enter mode(0:Weapon, 1:Equipment, 2:Gem, 3:Defence): ";
  cin >> mode;

  switch(mode) {
  case WEAPON:
    cout << "Weapon" << endl; break;
  case EQUIPMENT:
    cout << "Equipment" << endl; break;
  case GEM:
    cout << "Gem" << endl; break;
  case DEFENSE:
    cout << "Defence" << endl; break;
  default:
    cout << "Wrong mode" << endl;
  }

}
