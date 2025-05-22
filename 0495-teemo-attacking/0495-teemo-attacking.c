int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
    int t = 0;
    for (int i=0; i < timeSeriesSize-1; i++) {
        if (timeSeries[i] + duration - 1 < timeSeries[i+1]) {
            t=t+duration;
        }
        else {
            t = t + (timeSeries[i+1] - timeSeries[i]);
        }
    }

    return t + duration;
}