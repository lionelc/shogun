classifier_accuracy = 0.0001;
init_random = 42;
classifier_labels = [1, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1];
seqlen = 60;
classifier_tube_epsilon = 0.01;
classifier_epsilon = 1e-05;
data_test = {'CAGAAAGACTCAGATATCACGTACGGTGCTATCTAACCATACCACACTAATTACCTTTGC', 'TTGCTGTGTGCTGGAGGAAGTGAGACAAACACGCCTAGAAGGTGTAAAAGGATTCAAAAG'};
gap = 0;
data_type = '';
kernel_name = 'CommWordString';
classifier_type = 'kernel';
classifier_classified = [-0.425639395, -1.10873077];
reverse = 'False';
kernel_arg1_normalization = 2;
classifier_C = 1.5;
feature_obtain = 'Char';
name = 'GPBTSVM';
classifier_num_threads = 1;
data_train = {'TCAAGATTTCAGGTCCTCGAGAGGATGACATTTTGGCATTTGTCAGGCATGCGCCACTTC', 'TGTGGAAAATTCGCTTTCGCAAGTCTAGCAAGTCAGAGCCTCTTGAGTTCCTGCTGTGCA', 'CTGTCTCTGCGGAGAGAACGCGTGGCGGACGATGATCCAAAGCCACGGACGGACGCGTAG', 'AGCGCCATAATCGGGGAGACAGGTTTAGGCGCTTGGCTTCCATTGAAGTACGCTCTCTAG', 'AGTCAAAAGGAAAAGACAGCGGGTGGCGCACTCGCGTTCCTCCTACTGCCGACCGGACTG', 'TTTAGATTGTGCCCATAGTTGTCAACTTACAAAACTTTAATGTACATCATTTGTGTGATC', 'ATTGCGTGGCGACTAGTTCACGCAATGTACTTTTCTTAAACATTCCACGAATACTGACAC', 'ACGTCTTAGCCCCATGCACAAATTGCCGTGAAATTCATCACTCGTTACGGAGTAAGGATT', 'TGTATTCTTGCTGCAGTCCCTCAAACAGTTTAGCTCCACAGCGAGCGTGCATGAAGAGAC', 'TCCAGACCTCTACTCTCTTGCATGCGGCCTCACGCAAAGGTTTGTGGAGCTTGGAATGGT', 'TTGGTGCCATAAGAATATAGAACGTCCCATATACATCCGGTACGAGGTCCGGCGGAATGT'};
feature_class = 'string_complex';
classifier_bias = -0.684397600962;
feature_type = 'Word';
classifier_alphas = [1.5, -1.03510238, -0.695690369, -1.5, -0.838205704, -1.05801077, -0.237228284, -0.635762489, 1.5, 1.5, 1.5];
kernel_arg0_use_sign = 'False';
alphabet = 'DNA';
classifier_support_vectors = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
accuracy = 1e-09;
order = 3;
data_class = 'dna';