# neuwillow
The goal of NeuWillow is to interpret [EEG](https://en.wikipedia.org/wiki/Electroencephalography) and [fMRI](https://en.wikipedia.org/wiki/Electroencephalography) datasets and to detect abnormalities.
  - Datasets must use follow the industry standard [BIDS Format](https://bids.neuroimaging.io).
  - Datasets will come from reputable open source databases. This list is exhaustive, and will be updated as more sources are added.
    - [OpenNeuro](https://openneuro.org/)
    - [OpenBCI](https://openbci.com/community/publicly-available-eeg-datasets/)
    - [Frontiers](https://www.frontiersin.org/articles/10.3389/fnins.2021.755817/full)
    - [Figshshare](https://figshare.com/)
    - [Physionet](https://mimic.physionet.org/)
    - [Predict-UNM](http://predict.cs.unm.edu/)
  - EEGs cannot detect [Action Potentials](https://en.wikipedia.org/wiki/Action_potential), as they are too brief and happen asynchronously at the scalp.
  - Rather EEG output will measure [Postsynaption Potentials](https://en.wikipedia.org/wiki/Postsynaptic_potential) or PSPs.
  - NeuWillow will provide a way of creating and recording a set of [Action Potentials](https://en.wikipedia.org/wiki/Action_potential) and corresponding metadata.
  - Identify the specific cause(s) and result(s) of manually of an action potential created manually.
  - Identify what [neurotransmitters](https://en.wikipedia.org/wiki/Neurotransmitter) bind to postsysynaptic neurons, and which are selected as part of the reuptake process.
