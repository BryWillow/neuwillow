# neuwillow
The goal of NeuWillow is to provide both [EEG](https://en.wikipedia.org/wiki/Electroencephalography) and [fMRI](https://en.wikipedia.org/wiki/Functional_magnetic_resonance_imaging) datasets from the same patient and to detect abnormalities and comorbidities in the human brain. EEGs use electrodes on the scalp to measure electrical discharges in the brain. 

# Background
- The [EEG](https://en.wikipedia.org/wiki/Electroencephalography), in much simplified terms, is designed to capture electrical impulses within the brain. Specifically, abnormal discharges, and sharp spike and wave patterns assosciated with epilepsy. An EEG can, however, be used to diagnose other conditions such as brain tumors and strokes. Approximately 2/3 of those taking anti-epileptic medicatiosns, experience seizure control. Approximately 1/3 do not. Currently, we know, based on the type of seizure, which medication a patient will respond to. But stil, many do not. It is unclear whether certain medications, or combinations therof cause brain injury, whether short term, long term, or permanent. We need to better define seizure control means, and understand what types of brain injuries anti-epileptic medications can cause.

- The [fMRI](https://en.wikipedia.org/wiki/Functional_magnetic_resonance_imaging), in much simplified terms, is designed to create a mapping of the brain, and, given specific stimulii, show the flow of blood to specific regions of the brain. While this can help surgeons create a presurgical plan, it can also help us understand the efficacy of certain medication regimens, and specific brain injuries that have been caused.

# Goals 
  - To interepret EEG and fMRI datasets.
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

# Most Relevant Publications and Studies
- [Tracy Warbrick: Simultaneous EEG and fMRI](https://pmc.ncbi.nlm.nih.gov/articles/PMC8952790/) 
- [Christopher Mulert: Simultaneous EEG and fMRI](https://pmc.ncbi.nlm.nih.gov/articles/PMC3811108/)
- [Abreu R, Leal A, Figueiredo P: EEG-Informed fMRI](https://pubmed.ncbi.nlm.nih.gov/29467634/)
- [Christoph M Michel  1 , Micah M Murray: Towards the utilization of EEG as a brain imaging tool](https://pubmed.ncbi.nlm.nih.gov/22227136/)
- [Rodolfo Abreu: EEG-Informed fMRI](https://www.frontiersin.org/journals/human-neuroscience/articles/10.3389/fnhum.20
