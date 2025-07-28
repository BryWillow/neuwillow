# neuwillow: neurological disorders and comorbidities


NeuWillow is a [neuroscience](https://en.wikipedia.org/wiki/Neuroscience)-based research project that studies regions of the brain associated with [neurological disorders](https://en.wikipedia.org/wiki/Neurological_disorder) and comorbid [mental illnesses](https://en.wikipedia.org/wiki/Mental_disorder). The project gets its name "Neu" for [neuron](https://en.wikipedia.org/wiki/Neuron), and "Willow" for the tree-like structure of [dendrite](https://en.wikipedia.org/wiki/Dendrite) connections. It aims to model the regions of the brain impacted by these disorders and illnesses, and untangle any relationships. At a birds-eye view NeuWillow does the following: 

- Simulate [post-synaptic](https://en.wikipedia.org/wiki/Postsynaptic_potential) activity in [dendrites](https://en.wikipedia.org/wiki/Dendrite) with different types of inhibitory and excitatory [neurotransmitters](https://en.wikipedia.org/wiki/Neurotransmitter). A few relevant neurotransmitters include [Acetylcholine](https://en.wikipedia.org/wiki/Acetylcholine) (memory and convulsions), [Dopamine](https://en.wikipedia.org/wiki/Dopamine) (mental illnesses), [GABA](https://en.wikipedia.org/wiki/GABA), and [Glutamate](https://en.wikipedia.org/wiki/Glutamate_neurotransmitter) (learning and memory).

- Activate [neurotransmitter receptors](https://en.wikipedia.org/wiki/) and open [ion channels](https://en.wikipedia.org/wiki/Ion_channel).

- Identify causes of [dendrite spine head and neck](https://www.sciencedirect.com/topics/immunology-and-microbiology/dendritic-spine) morphology and its relationship to [neuroplasticity](https://en.wikipedia.org/wiki/Neuroplasticity).

- Generate [action potentials](https://en.wikipedia.org/wiki/Action_potential), track their paths down [axons](https://en.wikipedia.org/wiki/Axon) to [synaptic vesicles](https://en.wikipedia.org/wiki/Synaptic_vesicle).

- Simulate what neurotransmitters pass through the [axon terminal](https://en.wikipedia.org/wiki/Axon_terminal) into the [synapse]()  between the post-synaptic neuron. What neurotransmitters are part of the [reuptake process](https://en.wikipedia.org/wiki/Reuptake), float away and degraged by [enzymes](https://en.wikipedia.org/wiki/Enzyme_inhibitor), or bind to post-synaptic receptor sites.

- When the modeling process is complete, and based on the data available, we will begin to define more specific criteria, for evaluating medications such as age, gender, race, height, weight, etc.

- Many technical details are involved in reading open-source EEG, MRI, fMRI test data into NeuWillow. For example, EEGs and a handful of other tests use the [BIDS](https://bids-specification.readthedocs.io/en/stable/) standard for formatting datasets. Many datasources, and datasets from reputable sources are freely available. This part of the project is still TBD.

## Primary Areas of Study
- The <u>_**primary**_</u> neurological conditions we will study are Epilepsy and Dementia. Specifically, the relationship between these two conditions, and whether they exacerbate one another.
  - Epilepsy has many known nuances, overlapping characteristics, and subcategories. However, most types, which we will study, fall into at least one (or more) of the below recognized categories:
    - [Generalized](https://en.wikipedia.org/wiki/Generalized_epilepsy)
    - [Focal](https://en.wikipedia.org/wiki/Focal_seizure)
    - [Combined Focal and Generalized](https://pubmed.ncbi.nlm.nih.gov/39352258/)
  - Dementia will be separated into the the five most common categories:
    - Alzheimer's Disease
    - Vascular Dementia
    - Lewy Body Dementia
    - Frontotemporal Dementia
    - Mixed Dementia 
* The <u>_**comorbid**_</u> mental illnesses we will study are Anxiety and Depression.
  - Anxiety will be limited to the three most common categories:
    - Generalized Anxiety Disorder (GAD)
    - Panic Disorder
    - Social Anxiety
  - Depression will be limited to three common categories:
    - Major Depressive Disorder (MDD)
    - Persistent Depressive Disorder
    - Bipolar Depression
## Medications
|Class|Brand|Substance|Treats 
|-----|-------|-----|----|
|[Antiepileptic Drugs](https://en.wikipedia.org/wiki/Anticonvulsant)|[Lamictal](https://medlineplus.gov/druginfo/meds/a695007.html)|[Lamotrigine](https://medlineplus.gov/druginfo/meds/a695007.html)|[Epilepsy](https://www.ninds.nih.gov/health-information/disorders/epilepsy-and-seizures)
|[Antiepileptic Drugs](https://en.wikipedia.org/wiki/Anticonvulsant)|[Zonegran](https://medlineplus.gov/druginfo/meds/a603008.html)|[Zonasimide](https://medlineplus.gov/druginfo/meds/a603008.html)|[Epilepsy](https://www.ninds.nih.gov/health-information/disorders/epilepsy-and-seizures)
|[Antiepileptic Drugs](https://en.wikipedia.org/wiki/Anticonvulsant)|[Depakote](https://medlineplus.gov/druginfo/meds/a682412.html)|[Valporic Acid](https://medlineplus.gov/druginfo/meds/a682412.html)| [Epilepsy](https://www.ninds.nih.gov/health-information/disorders/epilepsy-and-seizures)
|[Cholinesterase Inhibitors](https://en.wikipedia.org/wiki/Cholinesterase_inhibitor)|[Aricept](https://medlineplus.gov/druginfo/meds/a697032.html)|[Donepezil](https://medlineplus.gov/druginfo/meds/a697032.html)|[Dementia](https://medlineplus.gov/dementia.html)
|[Cholinesterase Inhibitors](https://en.wikipedia.org/wiki/Cholinesterase_inhibitor)|[Exelon](https://medlineplus.gov/druginfo/meds/a602009.html)|[Rivastigmine](https://medlineplus.gov/druginfo/meds/a602009.html)|[Dementia](https://medlineplus.gov/dementia.html)
|[Cholinesterase Inhibitors](https://en.wikipedia.org/wiki/Cholinesterase_inhibitor)|[Galantamine](https://medlineplus.gov/druginfo/meds/a699058.html)|[Galantamine](https://medlineplus.gov/druginfo/meds/a699058.html)|[Dementia](https://medlineplus.gov/dementia.html)
|[Selective Serotonin Reuptake Inhibitors](https://en.wikipedia.org/wiki/Selective_serotonin_reuptake_inhibitor)|[Zoloft](https://medlineplus.gov/druginfo/meds/a697048.html)|[Sertraline](https://medlineplus.gov/druginfo/meds/a697048.html)|[Anxiety](https://medlineplus.gov/anxiety.html), [Depression](https://medlineplus.gov/depression.html)
|[Selective Serotonin Reuptake Inhibitors](https://en.wikipedia.org/wiki/Selective_serotonin_reuptake_inhibitor)|[Prozac](https://medlineplus.gov/druginfo/meds/a689006.html)|[Prozac](https://medlineplus.gov/druginfo/meds/a689006.html)|[Anxiety](https://medlineplus.gov/anxiety.html), [Depression](https://medlineplus.gov/depression.html)
|[Selective Serotonin Reuptake Inhibitors](https://en.wikipedia.org/wiki/Selective_serotonin_reuptake_inhibitor)|[Paxil](https://medlineplus.gov/druginfo/meds/a698032.html)|[Paroxetine](https://medlineplus.gov/druginfo/meds/a698032.html)|[Anxiety](https://medlineplus.gov/anxiety.html), [Depression](https://medlineplus.gov/depression.html) 
|||
## Objectives
  - Model regions of the brain impacted by the above neurological disorders and mental illnesses.
  - Create or use existing quantitative scales for measuring severity.
  - Gather relevant open-source data from EEG, MRI, fMRI, and other relevant tests
  - The NIH, OpenNeuro, and GitHub provide reputable, reliable datasets.
  - Read data in the industry-standard Brain Imaging Data Structure (BIDS) format.
  - Train the models based on data from these studies.
  - Start introducing classes of medication to the model.
  - Quantitatively measure impact and severity for each class of medication.
