// Define the tracer equation

fvScalarMatrix tracerEqn
(
    fvm::ddt(tracer)            //Temporal term
  + fvm::div(phi, tracer)       //Convection term
  - fvm::laplacian(DT, tracer)  //Diffusion term
    // ==
    // fvModels.source(Tracer) if you want to define a source term
);

// fvConstraints.constrain(TEqn);
tracerEqn.solve();
//fvConstraints.constrain(T);

Info << "Min/Max Tracer: " << min(tracer).value() << "/ " <<  max(tracer).value() << endl;
