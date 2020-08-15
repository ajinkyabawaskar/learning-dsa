    #include <iostream>
using namespace std;

int main()
{
    // to store the number of test cases
    int T = 1;
    int N = 1;
    long long P = 1;
    long long K = 1;
    long long jumps = 0;
    long long min_jumps = 0;
    long long solution = -1;

    // input the number of test cases
    std::cin >> T;
    // for all test cases
    while (T)
    {
        --T;
        jumps = 0;
        min_jumps = 0;
        solution = -1;
        // input the total number of players 
        std::cin >> N;
        // input the position of Chef
        std::cin >> K;

        // while all the players play
        while(N) {
            std::cin >> P;
            // if K%P = 0, it means that player can jump to the chef's square.
            if(K%P == 0) {
                // then we calculate the number of jumps taken
                // if the jumps taken by current player are more than the jumps taken by the previous player,
                // we do not substitute it to jumps.
                jumps = K/P;
                if(min_jumps == 0) {
                    min_jumps = jumps;
                    solution = P;
                }
                else {
                    if (min_jumps > jumps) {
                        min_jumps = jumps;
                        solution = P;
                    }
                }
            }
            --N;
        }
        std::cout << solution;
        std::cout << "\n";        
    }
    return 0;
}
