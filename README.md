# Custom OpenFOAM Solver with Scalar Transport for PitzDaily Case

## Project Description

This repository contains a custom OpenFOAM solver, **myFoamRun**, developed to simulate scalar transport alongside flow variables in CFD simulations. The project modifies the default `foamRun` solver by incorporating an advection-diffusion equation for a scalar field `T`, enabling its application in scenarios such as temperature transport, pollutant dispersion, or passive scalar studies.

To demonstrate and validate the solver, a **pitzDaily** test case has been prepared. This classic benchmark case models flow over a backward-facing step, providing a reliable setup for testing scalar transport under steady-state conditions.

---

## Features

- **Custom Solver:**
  - Based on OpenFOAM’s `foamRun` with added support for scalar transport via a `T` field.
  - Implements the steady-state advection-diffusion equation:
    \[
    \nabla \cdot (\mathbf{u} \cdot T) - \nabla \cdot (D_T \nabla T) = 0
    \]

- **pitzDaily Test Case:**
  - Configured to evaluate scalar transport behavior.
  - Includes a defined diffusivity `D_T` and initial/boundary conditions for the scalar field `T`.

- **User-Friendly Setup:**
  - Easy-to-follow instructions for compiling the solver and running the test case.
  - Editable fields in the case directory for customization.

---

## Getting Started
##############################################
# 1. Clone the Repository
##############################################
git clone <repository-url>
cd custom-openfoam-solver


##############################################
# 2. Compile the Solver
##############################################

# Load your OpenFOAM environment
source /opt/openfoam12/etc/bashrc

# Clean and compile the solver
wclean
wmake


##############################################
# 3. Prepare the Case
##############################################

# Navigate to the pitzDaily directory and ensure:
cd pitzDaily

# Check that 'constant/transportProperties' includes the diffusivity D_T.
# Check that '0/T' file defines initial and boundary conditions for the scalar field.


##############################################
# 4. Run the Simulation
##############################################

myFoamRun


##############################################
# 5. Post-Processing
##############################################

# Visualize the scalar field T and flow results using ParaView or another tool.
# Example:
# paraview

##############################################
# Use Cases
#
# - Heat transfer simulations
# - Pollutant dispersion in airflow
# - Steady-state scalar transport in fluid systems
#
# Resources:
# Official OpenFOAM Documentation: https://openfoam.org
# Example setup files and test cases are included in the repository.
#
# 🎉 Happy simulating! Explore, experiment, and customize further as needed! 🚀
##############################################
