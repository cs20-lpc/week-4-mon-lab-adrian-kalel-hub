#include "LinkedList.hpp"
#include <string>

void print_out(LinkedList<int> list){
    for(int i = 0; i < list.getLength(); i++){
        cout << list.getElement(i) << " ";
    }
    cout << "\n";
}


int main() {
    // call the constructor
    LinkedList<int> splitList;
    splitList.append(1); splitList.append(2); splitList.append(3); splitList.append(4); splitList.append(5); splitList.append(6); splitList.append(7);
    //splitList.append(8);
    //splitList.append(9);
    int count = 0;
    
    int length = splitList.getLength()/3;
    
    LinkedList<int> List1;
    LinkedList<int> List2;
    LinkedList<int> List3;
    
    splitList.getLength() % 3 != 0? length = splitList.getLength()/3 + 1 : splitList.getLength()/3;
 
    while(length != List1.getLength()){
        List1.append(splitList.getElement(count));
        count++;
    }
    while(length != List2.getLength()){
        List2.append(splitList.getElement(count));
        count++;
    }
    for(int i = 0; i < splitList.getLength() % 3; i++){
        List3.append(splitList.getElement(count));
        count++;
    }
    
    print_out(splitList);
    print_out(List1);
    print_out(List2);
    print_out(List3);
    cout << splitList.getLength() << " " << length;
    /*
    // add elements to the list
    splitList.append("Heart");
    splitList.insert(0, "Your");
    splitList.insert(0, "May");

    // try replacing as an invalid operation
    try {
        splitList.replace(-3, "?");
    }
    catch (string& e) {
        cerr << e << endl;
    } //out of bounds, works

    // add another element
    splitList.append("Citrus");

    // try inserting as an invalid operation
    try {
        splitList.insert(5, "kweh");
    }
    catch (string& e) {
        cerr << e << endl;
    } //out of bounds, works

    // remove an element
    splitList.remove(3);

    // display the state of the list
    cout << splitList;

    // get the second element and display it
    string word = splitList.getElement(2);
    cout << "Element 2: " << word << endl;

    // create a second list using the copy constructor
    LinkedList<string> secondList = splitList;

    // modify the second list and display its state
    secondList.append("Beat");
    secondList.replace(2, "Drums");
    cout << secondList;

    // try removing an element as an invalid operation
    try {
        secondList.remove(3);
    }
    catch (string& e) {
        cerr << e << endl;
    }

    // create a third list using the default constructor (max size of 100)
    LinkedList<string> thirdList;

    // display the state of the list, should be empty
    cout << thirdList;

    // copy the first list to the third list using assignment overload
    thirdList = splitList;

    // display the length and max size, should match the first list
    cout << "thirdList length: " << thirdList.getLength() << endl;

    // add elements to the list
    thirdList.append("Be A");
    thirdList.append("Yellow");
    thirdList.append("Banana");

    // display the state of the list
    cout << thirdList;

    // try getting elements as an invalid operation
    try {
        cout << thirdList.getElement(-7) << endl;
    }
    catch (string& e) {
        cerr << e << endl;
    }
    try {
        cout << thirdList.getElement(7) << endl;
    }
    catch (string& e) {
        cerr << e << endl;
    }

    // clear out the list and verify it is now empty
    splitList.clear();
    if (splitList.isEmpty()) {
        cout << "splitList is empty!\n";
    }

    // terminate

    // Create first list of integers
    LinkedList<int> numbers;

    // Add elements
    numbers.append(100);
    numbers.insert(0, 50);
    numbers.insert(0, 25);

    // Invalid replace
    try {
        numbers.replace(-2, 999);
    }
    catch (string& err) {
        cerr << err << endl;
    }

    // Add more elements
    numbers.append(200);

    // Invalid insert
    try {
        numbers.insert(10, 777);
    }
    catch (string& err) {
        cerr << err << endl;
    }

    // Remove element at position 3
    numbers.remove(3);

    // Display list
    cout << "numbers: " << numbers;

    // Get and display element at index 2
    int value = numbers.getElement(2);
    cout << "Element at index 2: " << value << endl;

    // Test copy constructor
    LinkedList<int> copyNumbers(numbers);

    copyNumbers.append(300);
    copyNumbers.replace(1, 111);

    cout << "copyNumbers: " << copyNumbers;

    // Invalid remove
    try {
        copyNumbers.remove(8);
    }
    catch (string& err) {
        cerr << err << endl;
    }

    // Test assignment operator
    LinkedList<int> assignedNumbers;
    assignedNumbers = numbers;

    cout << "assignedNumbers length: "
         << assignedNumbers.getLength() << endl;

    // Add more elements
    assignedNumbers.append(400);
    assignedNumbers.append(500);
    assignedNumbers.append(600);

    cout << "assignedNumbers: " << assignedNumbers;

    // Invalid getElement
    try {
        cout << assignedNumbers.getElement(-5) << endl;
    }
    catch (string& err) {
        cerr << err << endl;
    }

    try {
        cout << assignedNumbers.getElement(20) << endl;
    }
    catch (string& err) {
        cerr << err << endl;
    }

    // Clear and check empty
    numbers.clear();
    if (numbers.isEmpty()) {
        cout << "numbers list is now empty!" << endl;
    }

    
    // Create a list of boolean values
    LinkedList<bool> flags;

    // Add elements
    flags.append(true);
    flags.insert(0, false);
    flags.insert(0, true);

    // Invalid replace
    try {
        flags.replace(-1, true);
    }
    catch (string& err) {
        cerr << err << endl;
    }

    // Add another element
    flags.append(false);

    // Invalid insert
    try {
        flags.insert(7, true);
    }
    catch (string& err) {
        cerr << err << endl;
    }

    // Remove element at position 3
    flags.remove(3);

    // Display list
    cout << "flags: " << flags;

    // Get and display element at index 1
    bool status = flags.getElement(1);
    cout << "Element at index 1: " << status << endl;

    // Test copy constructor
    LinkedList<bool> backupFlags(flags);

    backupFlags.append(true);
    backupFlags.replace(0, false);

    cout << "backupFlags: " << backupFlags;

    // Invalid remove
    try {
        backupFlags.remove(10);
    }
    catch (string& err) {
        cerr << err << endl;
    }

    // Test assignment operator
    LinkedList<bool> assignedFlags;
    assignedFlags = flags;

    cout << "assignedFlags length: "
         << assignedFlags.getLength() << endl;

    // Add more elements
    assignedFlags.append(true);
    assignedFlags.append(false);
    assignedFlags.append(true);

    cout << "assignedFlags: " << assignedFlags;

    // Invalid getElement
    try {
        cout << assignedFlags.getElement(-4) << endl;
    }
    catch (string& err) {
        cerr << err << endl;
    }

    try {
        cout << assignedFlags.getElement(15) << endl;
    }
    catch (string& err) {
        cerr << err << endl;
    }

    // Clear and check empty
    flags.clear();
    if (flags.isEmpty()) {
        cout << "flags list is now empty!" << endl;
    }
    */
    return 0;
}
