<?php
/**
 * @file
 * dk_regions.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function dk_regions_taxonomy_default_vocabularies() {
  return array(
    'region' => array(
      'name' => 'Region',
      'machine_name' => 'region',
      'description' => 'Regions hosting Drupal Kitchen events',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
