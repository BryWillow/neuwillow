# neuwillow
The goal of NeuWillow is to interpret [EEG](https://en.wikipedia.org/wiki/Electroencephalography) and [fMRI](https://en.wikipedia.org/wiki/Functional_magnetic_resonance_imaging) datasets and to detect abnormalities and comorbidities in the human brain.EEGs use electrodes on the scalp to measure electrical discharges in the brain. While EEGs are typically used to diagnose [epilepsy](https://en.wikipedia.org/wiki/Epilepsy), they can also help diagnose [sleep disorders](https://en.wikipedia.org/wiki/Sleep_disorder), [brain tumors](https://en.wikipedia.org/wiki/Brain_tumor), and types of [strokes](https://en.wikipedia.org/wiki/Stroke). An fMRI, however, is a different type of neuroimaging that is complementary to an EEG. While an [EEG](https://en.wikipedia.org/wiki/Electroencephalography) measures electrical current, an [fMRI](https://en.wikipedia.org/wiki/Functional_magnetic_resonance_imaging) creates a map of the brain and measures blood flow to specific regions. fMRIs can often help diagnose [mood disorders](https://en.wikipedia.org/wiki/Mood_disorder), the efficacy of certain medication regimens, and help surgeons create a presurgical plan.
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
