#include "Directory.h"
#include "file.h"

int main(){
    Directory root("Root");
    Directory subDir1("mnt");
    Directory MountedDisk("MohaDisk");
    file myFile("nicefile");
    root.addChild(&subDir1);
    root.addChild(&myFile);
    subDir1.addChild(&MountedDisk);
    MountedDisk.addChild(&myFile);
    root.displayInfo();
    root.RemoveChild(&subDir1);
    std::cout << "After removing subDir1:\n";
    root.displayInfo();
    return 0;
}