#include <cstdio>
#include <vector>

// Συνάρτηση για υπολογισμό Hamming Loss
double hammingLoss(const std::vector<int>& trueLabels, const std::vector<int>& predictedLabels) {
    int totalErrors = 0;
    int numInstances = trueLabels.size();

    for (int i = 0; i < numInstances; ++i) {
        if (trueLabels[i] != predictedLabels[i]) {
            totalErrors++;
        }
    }

    // Υπολογισμός Hamming Loss
    double loss = static_cast<double>(totalErrors) / numInstances;
    return loss;
}

int main() {
    int numPairs;
    printf("Εισάγετε τον αριθμό των ζευγών (x, y): ");
    scanf("%d", &numPairs);

    std::vector<int> x(numPairs);
    std::vector<int> y(numPairs);

    // Εισαγωγή δεδομένων για x και y
    for (int i = 0; i < numPairs; ++i) {
        printf("Εισάγετε το ζεύγος αριθμών (x, y) για τον %do ζεύγος: ", i + 1);
        scanf("%d %d", &x[i], &y[i]);
    }

    std::vector<std::vector<int>> labels(numPairs, std::vector<int>(5, 0));

    // Εισαγωγή δεδομένων για τις ετικέτες l1, l2, l3, l4, l5
    for (int i = 0; i < numPairs; ++i) {
        printf("Εισάγετε τις ετικέτες (l1, l2, l3, l4, l5) για τον %do ζεύγος (0 ή 1): ", i + 1);
        for (int j = 0; j < 5; ++j) {
            scanf("%d", &labels[i][j]);
        }
    }

    // Υπολογισμός Hamming Loss για κάθε πιθανό ζεύγος
    for (int i = 0; i < numPairs; ++i) {
        for (int j = i + 1; j < numPairs; ++j) {
            double loss = hammingLoss(labels[i], labels[j]);
            printf("Hamming Loss για το ζεύγος (%do, %do): %lf\n", i + 1, j + 1, loss);
        }
    }

    // Υπολογισμός συνολικού Hamming Loss
    double totalLoss = 0.0;
    for (int i = 0; i < numPairs; ++i) {
        for (int j = i + 1; j < numPairs; ++j) {
            totalLoss += hammingLoss(labels[i], labels[j]);
        }
    }

    // Υπολογισμός τελικού Hamming Loss
    double finalLoss = totalLoss / ((numPairs * (numPairs - 1)) / 2);
    printf("Τελικό Hamming Loss: %lf\n", finalLoss);

    // Υπολογισμός μέσου όρου των τιμών x και y
    double averageX = 0.0;
    double averageY = 0.0;

    for (int i = 0; i < numPairs; ++i) {
        averageX += x[i];
        averageY += y[i];
    }

    averageX /= numPairs;
    averageY /= numPairs;

    printf("Μέσος όρος των τιμών x: %lf\n", averageX);
    printf("Μέσος όρος των τιμών y: %lf\n", averageY);

    // Υπολογισμός τελικού label ανάλογα με την πλειοψηφία των τιμών από τα labels l1 έως l5
    std::vector<int> finalLabel(5, 0);
    for (int i = 0; i < 5; ++i) {
        int countOnes = 0;
        for (int j = 0; j < numPairs; ++j) {
            if (labels[j][i] == 1) {
                countOnes++;
            }
        }
        finalLabel[i] = countOnes > numPairs / 2 ? 1 : 0;
    }

    printf("Τελικό label ανάλογα με την πλειοψηφία:\n");
    printf("l1: %d\nl2: %d\nl3: %d\nl4: %d\nl5: %d\n", finalLabel[0], finalLabel[1], finalLabel[2], finalLabel[3], finalLabel[4]);

    return 0;
}
