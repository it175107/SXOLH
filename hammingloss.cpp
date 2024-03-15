#include <iostream>
#include <vector>

double hammingLoss(const std::vector<std::vector<int>>& trueLabels, const std::vector<std::vector<int>>& predictedLabels) {
    int numInstances = trueLabels.size();
    int numLabels = trueLabels[0].size();
    double loss = 0.0;

    for (int i = 0; i < numInstances; ++i) {
        for (int j = 0; j < numLabels; ++j) {
            if (trueLabels[i][j] != predictedLabels[i][j]) {
                loss += 1.0;
            }
        }
    }

    // Normalize by the total number of instances and labels
    loss /= (numInstances * numLabels);

    return loss;
}

int main() {
    // Example usage with printf and scanf
    int numInstances, numLabels;

    printf("Enter the number of instances: ");
    scanf("%d", &numInstances);

    printf("Enter the number of labels: ");
    scanf("%d", &numLabels);

    std::vector<std::vector<int>> trueLabels(numInstances, std::vector<int>(numLabels));
    std::vector<std::vector<int>> predictedLabels(numInstances, std::vector<int>(numLabels));

    printf("Enter the true labels (0 or 1) for each instance and label:\n");
    for (int i = 0; i < numInstances; ++i) {
        for (int j = 0; j < numLabels; ++j) {
            scanf("%d", &trueLabels[i][j]);
        }
    }

    printf("Enter the predicted labels (0 or 1) for each instance and label:\n");
    for (int i = 0; i < numInstances; ++i) {
        for (int j = 0; j < numLabels; ++j) {
            scanf("%d", &predictedLabels[i][j]);
        }
    }

    double loss = hammingLoss(trueLabels, predictedLabels);

    printf("Hamming Loss: %lf\n", loss);

    return 0;
}
