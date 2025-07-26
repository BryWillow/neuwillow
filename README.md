# neuwillow

## Overview
NeuWillow is a neuroscience-based research project that studies regions of the brain associated with neurological disorders and comorbid mental illnesses. The project gets its name "Neu" for neuron, and "Willow" for the tree-like structure of dendrite connections. It aims to model the regions of the brain impacted by these disorders and illnesses. To simulate dendrite activity, neurotransmitter receptors, action potentials, axons, synapses and general neuronal communication. And subsequently study the impact caused by the below AED and SSRI medications:
|Class|Brand|Generic| 
|-----|-------|-----|
|AED|[Lamictal](https://www.ncbi.nlm.nih.gov/books/NBK547689/)|Lamotrigine
|AED|[Zonegran](https://www.ncbi.nlm.nih.gov/books/NBK547689/)|Zonasimide
|AED|[Depakote](https://www.ncbi.nlm.nih.gov/books/NBK547689/)|Valporic Acid
|SSRI|[Paxil](https://www.ncbi.nlm.nih.gov/books/NBK526022/)|Paroxetine
|SSRI|[Zoloft](https://www.ncbi.nlm.nih.gov/books/NBK547689/)|Sertraline
|SSRI|[Prozac](https://www.ncbi.nlm.nih.gov/books/NBK547689/)|Prozac
|

Some important questions to answer:
- Identify what conditions a patient has for a particular medication to be more effective.
- Do any of these medications cause brain injury over an extended period of time?
- Are any of these medications more effective when a patient has a chronic illness like [epilepsy](https://en.wikipedia.org/wiki/Epilepsy)?

## Testing Methods
- The [Electroencephalography (EEG)](https://en.wikipedia.org/wiki/Electroencephalography)
- The [fMRI](https://en.wikipedia.org/wiki/Functional_magnetic_resonance_imaging)
  
## Goals
  - Tp study the same patients over time.
  - To correctly interepret EEG and fMRI open source datasets in the industry standart [BIDS Format](https://bids.neuroimaging.io).
  - Collect data from reputable sources:
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

## Most Relevant Publications and Studies
- [Tracy Warbrick: Simultaneous EEG and fMRI](https://pmc.ncbi.nlm.nih.gov/articles/PMC8952790/) 
- [Christopher Mulert: Simultaneous EEG and fMRI](https://pmc.ncbi.nlm.nih.gov/articles/PMC3811108/)
- [Abreu R, Leal A, Figueiredo P: EEG-Informed fMRI](https://pubmed.ncbi.nlm.nih.gov/29467634/)
- [Christoph M Michel  1 , Micah M Murray: Towards the utilization of EEG as a brain imaging tool](https://pubmed.ncbi.nlm.nih.gov/22227136/)
- [Rodolfo Abreu: EEG-Informed fMRI](https://www.frontiersin.org/journals/human-neuroscience/articles/10.3389/fnhum.20)