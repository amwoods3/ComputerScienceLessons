#include <iostream>

void move(char fromPole, char toPole) {
    std::cout << fromPole << "->" << toPole << std::endl;
}


void solve_hanoi(int numberOfDiscs, char fromPole, char helperPole,
                char toPole) {
    if (numberOfDiscs == 1) {
        move(fromPole, toPole);
    }
    else {
        solve_hanoi(numberOfDiscs-1, fromPole, toPole, helperPole);
        move(fromPole, toPole);
        solve_hanoi(numberOfDiscs-1, helperPole, fromPole, toPole);
    }
}


int main()
{
    int n;
    std::cin >> n;
    solve_hanoi(n, 'A', 'B', 'C');
}
